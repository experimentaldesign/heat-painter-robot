# heat-painter-robot
A tool to create patterns using heat gun over a PET thermoplastic sheet.

Painter robot: how to paint with heat 
We started with an exploration about how we can transform the surface of a thermoplastic sheet using a heat gun. 
After several tests, we found that we can use the heat gun as a brush to ¨paint¨ the surface creating different patterns. 
The principal problem we found was the lack of control over all the process.


Design with light
Using a PET sheet 1.2 mm, we explored about qualities of the material under heat.
We were surprised for the change of color and texture and we thought about how to use this characteristics for design.
Our goal is to apply in a facade using the white part as a light sun filter and to allow views in other parts.

Using a PET sheet 1.2 mm, we explored about qualities of the material under heat.
We were surprised for the change of color and texture and we thought about how to use this characteristics for design.
Our goal is to apply in a facade using the white part as a light sun filter and to allow views in other parts.

Heat gun is attached to ABB robot with a tool flange, the relay connected with the arduino board allow us to turn on and off this tool if we want to heat one part or not depending of the facade design 

Using image sampler on GH, we can design a facade using an image based on the requirements of the facade we want (sunlight, views,etc). 
Based on this graphic we can ¨draw¨over the plastic surface and define panels to compose the total facade.

Using our GH script for the robot path, we include in the arduino using Robot plugin and connect the tool. During robot execution, we can control the heat time and the condition of turn on/off.
This script allows us to be more precise to apply the heat over the surface, stopping when we need transparency.



