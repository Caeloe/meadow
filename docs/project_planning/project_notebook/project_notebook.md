# Meadow Task Organizer Project Notebook

----

## Table of Contents

| Entry # | Entry Title                                                                                           | Category Tag     | Working Version | Date       |
| ------- | ----------------------------------------------------------------------------------------------------- | ---------------- | --------------- | ---------- |
| 1       | [Understanding and Navigating the Notebook](#understanding-and-navigating-the-notebook)               | #notebook        | 0.0.0           | 2026-02-14 |
| 2       | [Creating Goals and Project Timeline](#creating-goals-and-project-timeline)                           | #time_management | 0.0.0           | 2026-02-14 |
| 3       | [Re-Evaluating the Necessity of a Design Document](#re-evaluating-the-necessity-of-a-design-document) | #organization    | 0.0.0           | 2026-02-15 |
| 4       | [Planning System Organization](#planning-system-organization)                                         | #planning        | 0.0.0           | 2026-02-15 |

----

## Understanding and Navigating the Notebook

### #notebook

Entry: 1
Author: Aster Lee<br>Date: 2026-02-14<br>Working Version: 0.0.0

### Navigating the Notebook

- **Any standard Markdown viewer should be able to fully utilize this notebook.**
	- Section links, external links, image embedding, and tables should all be in accordance with standard Markdown syntax.
- **The table of contents contains hyperlinks for convenience.**
	- Entry titles will be hyperlinked to direct the viewer to the corresponding entry.
- **This document should be viewed in [Obsidian](https://obsidian.md/) for best results**
	- While not vital to function, using Obsidian will provide additional functionality, such as usage of the graph view and functionality of the Tags system. 
- **Some artifacts may appear in other Markdown viewers as a consequence of missing Obsidian functionality.**
	- (e.g. A section of text may be have a preceding hash. This is from the Tag system used in Obsidian. Example: `#tagged_text`)

### Notebook Entry Formatting

**All entries will share the same heading as follows:**

![*Fig. 1.*](./photos/2026-02-14_template_image.png)

* *Title* - Title of entry. Gives a specific description or focus for the entry
* *Subtitle Tag* - A subtitle that categorizes the entry into broader categories of similar entries. Takes advantage of Obsidian's tag system to easily organize and search for items.
* *Entry #* - Numerical index for entry. Helps to maintain chronological order and easy identification of entries.
* *Date* - Provides date entry was written.
* *Working version* - Indicates which version of the project the entry was working on. Follows standard [semantic versioning convention.](https://semver.org/)

### Rationale for Selecting Obsidian as a Text Editor

- **Obsidian is a strong tool for organization and workflow management.**
	- Its links, backlinks, tags, and graph view all contribute to a strongly organized system that improves workflow.
	- Less specifically, the general layout, controls, and presentation of tools all feel intuitive to me. This makes it a very appealing choice.
- **Obsidian natively supports Markdown.**
	- Obsidian uses Markdown as its standard text markup language, which vastly improves compatibility with HTML. 
		- Markdown is a markup language accepted as industry standard. It is almost universally utilized in all facets of programming, such as in README files. 
		- Writing documentation in Markdown will ensure this project's documentation is accessible to any interested party.
	- Markdown is also natively supported to be previewed in GitHub repositories. This allows users to preview all documents without having to download any files.

----

## Creating Goals and Project Timeline

### #time_management

Entry: 2<br>Author: Aster Lee<br>Date: 2026-02-14<br>Working Version: 0.0.0

### New Project Goal

**Finish project planning and design documentation by March 6, 2026. All details should be finalized except for minor revisions that may come later. Project should be in state ready to begin software development by deadline.**

- [x] Goal addresses timeliness.
- [x] Goal specifically addresses what must be achieved.
- [x] Goal addresses what work will contribute towards.

Having a strict, yet realistic goal such as this will help to motivate me. This will ensure I'm keeping a strong pace while not overworking myself. A date of March 6 will give me 20 days, which should be more than enough to get ready even with the busy schedule I keep.

### Creating Project Timeline

Given my busy nature as an honors student, the approach I will take to time management will deviate from typical project timelines:

- Task progress will be divided into weeks.
- Each week will have a certain set of criteria that must be met by its end.

This was done to provide myself with extra flexibility. I cannot guarantee that I will always have free time to work on the project, so my plans must be able to adapt to my schedule as needed.

The final timeline is as follows:

| Week | Dates        | Tasks to Be Completed                                                                                   |
| :--- | :----------- | ------------------------------------------------------------------------------------------------------- |
| 1    | 2-14 to 2-21 | Notebook basics, begin brainstorming, create mockups                                                    |
| 2    | 2-22 to 2-28 | Finish brainstorming, create formal plans, draft pseudocode, UML diagrams, finalize system architecture |
| 3    | 3-01 to 3-06 | Finish design document in totality, finalize plans and system structure                                 |

----

## Re-Evaluating the Necessity of a Design Document

### #organization

Entry: 3<br>Author: Aster Lee<br>Date: 2026-02-15<br>Working Version: 0.0.0

### Why reconsider?

After some time and sleep, I've questioned how useful a design document is for my purposes.

- **Design documents are useful for planning complete projects and laying out all necessary steps.**
	- My project will be far more iterative and experimental. I'm not aiming to create a final product just yet.
- **Utilizing design documents means I'll likely have to create one for every major iteration of this application. This seems untimely.**

### Weighing Pros and Cons of Design Documents

| Pros                                                   | Cons                                                         |
| ------------------------------------------------------ | ------------------------------------------------------------ |
| Encourages thoughtful designing and planning           | Requires heavy time investment                               |
| Leave little ambiguity for implementation              | I am unlikely to cooperate on this project                   |
| Thorough and robust: final product likely to be stable | Each major iteration will require a new design document      |
| Important skill for professional development           | Tedious. Could induce burnout or fatigue                     |
| Beneficial for cooperation                             | Design notebook fulfills many similar roles of design doc    |
|                                                        | Spreads my attention and focus too thin across several tasks |

After consideration, ***I have decided I will not move forwards with design documents.*** The benefits of removing them from my workload outweigh the potential benefits of maintaining them.

The timeline established in the previous entry must be revised. The revised timeline is as follows:

| Week | Dates        | Tasks to Be Completed                                                                                   |
| :--- | :----------- | ------------------------------------------------------------------------------------------------------- |
| 1    | 2-14 to 2-21 | Notebook basics, begin brainstorming, create mockups, diagram prototypes                                |
| 2    | 2-22 to 2-28 | Finish brainstorming, create formal plans, draft pseudocode, UML diagrams, finalize system architecture |
| 3    | 3-01 to 3-06 | Finalize plans and system structure. Identify necessary libraries, subsystems, helper functions, etc.   |

----

## Planning System Organization

### #planning

Entry: 4<br>Author: Aster Lee<br>Date: 2026-02-15<br>Working Version: 0.0.0

### Goal: Brainstorm ideas and details for system organization in order to create a stronger plan for how the application will be developed.

### Ideation and Brainstorming

Before any system organization can begin, I must first consider what I need to implement into this program. Brainstorming involves considering any and all ideas that may be relevant to the overall design. Extraneous or unimportant ideas can be culled later on in the process. 

The most important considerations have been listed below.

- **Usage of the [Pomodoro Technique](https://en.wikipedia.org/wiki/Pomodoro_Technique)**
	- Studies have reinforced effectiveness for productivity
- **Hierarchy of tasks**
	- Smaller tasks contribute to greater tasks which contribute to completion of an overall goal
	- Combines with Pomodoro. User focuses on a small task to chip away at the bigger picture
- **Simple interface**
	- Several testimonies cite confusing/unappealing UI as a turn-off for some programs
	- Clean presentation, drag-and-drop controls, etc.
	- Focused approach rather than information overload
- **A prioritization system**
	- People with ADHD struggle to prioritize (empirical findings and personal experience)
	- Consider factors of immediateness and importance ([Eisenhower Matrix](https://en.wikipedia.org/wiki/Priority_Matrix))
- **Written reflections upon task/goal completion**
	- Could promote mindfulness and help to constructively improve habits. 

With these basic ideas, I created a rudimentary UML diagram to imagine how the final program might be structured. This diagram was created to be a prototype rather than any official plan. 

Creating a preliminary mockups such as this promotes more thoughtful design and can highlight potential weak points in the proposed design. 

![*Fig. 1. Prototype UML diagram depicting the interactions between different sections of the application.](./photos/2026-02-15_uml_prototype.png)

The above diagram depicts the general concept for the application. 

- The `meadow` file exists to manage all of the interacting objects. Its sole purpose is to organize and initialize all necessary components.
- The `user` class will contain all necessary information relating to the user. Its data will be saved to JSON databases, chosen for their balance between readability and speed.
	- These databases will also save the configuration data utilized by the `meadow` file.
	- `user` also contains instances of `goal` and `task`, which naturally are the goals and tasks associated with the user.
		- The data associated with these instances will be saved into the user's corresponding JSON file
- The `goal` class exists as both a template for its child `task` class, but also to act as its own object. `goal` instances contain all relevant information for tracking their progress.
	- `goal` instances aggregate `tasks` as instance variables. This will allow for logical separation and clearly indicates which tasks work towards which goals.
- The `task` class is a child of `goal`. In its current iteration, it shares all attributes with its parent. I plan for there to be more differentiation between the two, thus justifying it being separate.