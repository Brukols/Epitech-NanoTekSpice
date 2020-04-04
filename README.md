# NanoTekSpice

NanoTekSpice is an Epitech project. The goal was to simulate eletric circuit.

## Description

As parameter, we take a configuration file in order to generate our own electric circuit. After that, you will be able to play with our circuit thanks to differents commands.

## Compilation

```bash
make # Compile the project
```

## Usage

You must to specify a configuration file and all the inputs must to have values.

```bash
./nanotekspice ressources/basics/and.nts a=0 b=1 a2=1 b2=1 a3=0 b3=0 a4=1 b4=0
> a=1 # To change an input
> display # Display all the outputs
> simulate # Simulate our circuit
> loop # Call simulate until signal SIGINT
> exit # To exit
```

## Contribution

Project made with [Benjamin Bourgeois](https://github.com/BourgeoisBenjamin)
