# Raycaster

This project is my Raylib implementation of a 2D raycaster.

It is one of those things that looks complicated until you understand what is actually happening. Every frame, rays shoot out from a single point in all directions. Each ray travels until it hits a wall, then stops. That is the whole idea. But once you move the light source around a scene with multiple walls, shadows form naturally, shapes emerge, and it starts to feel like something much more complex than it is.

In this version, the light source follows your mouse. Rays fan out 360 degrees and stop at the nearest wall they intersect. Walls behind other walls stay dark.

## controls

- Mouse moves the light source.

## how it works

Each frame, 360 rays are cast from the mouse position. For each ray, the program checks intersection against every wall in the scene using parametric line collision. If multiple walls are hit, only the closest one counts. The ray is drawn up to that point and no further.

## tech

- C++
- Raylib

## build

This project uses the included `Makefile` and is set up for Raylib with `mingw32-make`.

## run

To run this project on Windows, you need Raylib installed in the locations expected by the `Makefile`:

- `C:/raylib/raylib`
- `C:/raylib/w64devkit/bin`

If your Raylib install is somewhere else, update `RAYLIB_PATH` and `COMPILER_PATH` in the `Makefile` first.

Then from the project folder, build it with:

```
mingw32-make
```

That will create `game.exe`. Run it with:

```
.\game.exe
```

## what is next

This is the 2D foundation. The next step is projecting the ray distances into a 3D wolfenstein-style view where close walls appear tall and far walls appear short.
