# Project 2 - *FLIX*

**Flix** is a movies app using the [The Movie Database API](http://docs.themoviedb.apiary.io/#).

Time spent: **19** hours spent in total

## User Stories

The following **required** functionality is complete:

- [X] User can view a list of movies currently playing in theaters from The Movie Database.
- [X] Poster images are loaded using the UIImageView category in the AFNetworking library.
- [X] User sees a loading state while waiting for the movies API.
- [X] User can pull to refresh the movie list.

The following **optional** features are implemented:

- [ ] User sees an error message when there's a networking error.
- [X] Movies are displayed using a CollectionView instead of a TableView.
- [X] User can search for a movie.
- [ ] All images fade in as they are loading.
- [ ] User can view the large movie poster by tapping on a cell.
- [ ] For the large poster, load the low resolution image first and then switch to the high resolution image when complete.
- [ ] Customize the selection effect of the cell.
- [X] Customize the navigation bar.
- [X] Customize the UI.


Please list two areas of the assignment you'd like to **discuss further with your peers** during the next class (examples include better ways to implement something, how to extend your app in certain ways, etc):

1. I would like to know how to instead of opening a new screen when tapping on a TableView cell, opening a small screen over the existing screen thats displays the information we want. 
2. 

## Video Walkthrough

Here's a walkthrough of implemented user stories:

<img src='http://g.recordit.co/il1EoG4t3d.gif' title='Video Walkthrough' width='' alt='Video Walkthrough' />

GIF created with [LiceCap](http://www.cockos.com/licecap/).

## Notes

I'm still struggling with understanding Objective-C's syntax and XCode's layout. I noticed that when I began the app, I rushed through the content and didn't really understand why I was doing certain things. It felt like I was just blindly copying code from a video and I didn't really know why everything worked. I stopped myself and began to go at a slower pace so I could really grasp the information. I had trouble understanding how I was grabbig data from the API and storing it. I didn't know that the data was stored as a dictionary and this led me to creating many errors since I was trying to treat the movies data as an array. The hardest part for me in this project was implementing the search bar into the table view. I first tried to drag in a search bar onto the storyboard and configuring it that way, but I was stuck. Then I tried implementing it using a search controller, but that was a fail. I next tried using a video from YouTube to implement the search bar, but that was another fail. Finally, I worked with two of my podmates and was able to create a search bar using the search controller method. I'm upset that making a search bar took longer than it should have and I'm working to make sure that I never have to spend an excessive amount of time creating a feature. 

## Credits

List an 3rd party libraries, icons, graphics, or other assets you used in your app.

- [AFNetworking](https://github.com/AFNetworking/AFNetworking) - networking task library

## License

    Copyright 2019 Andrew Sepulveda

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
