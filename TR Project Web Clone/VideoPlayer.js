var player = videojs('videoplayer', {
    controls: true,
    loop: true,
    poster: "poster.jpg",
    fluid: true,
    playbackRates: [0.5, 1, 1.5, 2, 3],
    userActions: {
        hotkeys: true
    }
});