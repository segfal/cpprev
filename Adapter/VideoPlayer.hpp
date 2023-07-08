#ifndef __VIDEO_PLAYER_HPP__
#define __VIDEO_PLAYER_HPP__


//using adapter pattern to adapt the interface of the video player to the interface of the audio player
struct MediaPlayer
{
    virtual void play(std::string audioType, std::string fileName) = 0;
};



class AdvancedMediaPlayer
{
public:
    virtual void playVlc(std::string fileName) = 0;
    virtual void playMp4(std::string fileName) = 0;
};



class VlcPlayer : public AdvancedMediaPlayer
{
public:
    void playVlc(std::string fileName) override;
    void playMp4(std::string fileName) override;
};



class Mp4Player : public AdvancedMediaPlayer
{
public:
    void playVlc(std::string fileName) override;
    void playMp4(std::string fileName) override;
};



class MediaAdapter : public MediaPlayer
{
public:
    MediaAdapter(std::string audioType);
    void play(std::string audioType, std::string fileName) override;

private:

    AdvancedMediaPlayer* advancedMusicPlayer;
};



class AudioPlayer : public MediaPlayer
{
public:
    void play(std::string audioType, std::string fileName) override;
};








#endif // __VIDEO_PLAYER_HPP__