/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:29 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPAVItem.h>

@class MPMediaItem, NSCache;

@interface MPMediaQueryNowPlayingItem : MPAVItem {

	MPMediaItem* _mediaItem;
	NSCache* _cache;
	unsigned long long _nowPlayingItemOptions;

}

@property (nonatomic,readonly) MPMediaItem * mediaItem;                               //@synthesize mediaItem=_mediaItem - In the implementation block
@property (nonatomic,readonly) unsigned long long nowPlayingItemOptions;              //@synthesize nowPlayingItemOptions=_nowPlayingItemOptions - In the implementation block
+(void)applyVolumeNormalizationWithSoundCheckEnabled:(bool)arg1 forQueuedItems:(id)arg2 currentQuery:(id)arg3 ;
+(void)setShouldAlwaysAirplayFromCloud:(bool)arg1 ;
-(void)setAlternateAudioTrackID:(int)arg1 ;
-(void)loadAssetAndPlayerItem;
-(id)displayableText;
-(bool)useEmbeddedChapterData;
-(id)imageCacheRequestWithSize:(CGSize)arg1 time:(double)arg2 usePlaceholderAsFallback:(bool)arg3 ;
-(id)chapterTimeMarkers;
-(id)artworkTimeMarkers;
-(id)urlTimeMarkers;
-(double)durationFromExternalMetadata;
-(long long)customAVEQPreset;
-(bool)allowsEQ;
-(bool)isSupportedDefaultPlaybackSpeed:(unsigned long long)arg1 ;
-(void)setPlaybackStoppedTime:(double)arg1 ;
-(void)notePlaybackFinishedByHittingEnd;
-(double)playbackCheckpointCurrentTime;
-(void)setPlaybackCheckpointCurrentTime:(double)arg1 ;
-(void)setPlaybackFinishedTime:(double)arg1 ;
-(void)setRating:(float)arg1 ;
-(id)artist;
-(id)albumArtist;
-(unsigned long long)albumTrackNumber;
-(unsigned long long)albumTrackCount;
-(bool)canSeedGenius;
-(id)composer;
-(unsigned long long)discNumber;
-(unsigned long long)discCount;
-(bool)isValidPlayerSubstituteForItem:(id)arg1 ;
-(bool)isPlaceholderForItem:(id)arg1 ;
-(bool)isAssetURLValid;
-(bool)isExplicitTrack;
-(id)genre;
-(bool)hasAlternatesForTypes:(unsigned long long)arg1 ;
-(bool)isStreamable;
-(id)mainTitle;
-(bool)supportsRewindAndFastForward15Seconds;
-(bool)supportsAddStation;
-(id)titlesForTime:(double)arg1 ;
-(void)reevaluateType;
-(id)copyrightText;
-(long long)storeID;
-(id)mediaItem;
-(void)setLoudnessInfoVolumeNormalization:(float)arg1 ;
-(id)_newTimeMarkersForChapterType:(long long)arg1 ;
-(void)_handlePlaybackFinishedTime:(double)arg1 finishedByHittingEnd:(bool)arg2 ;
-(void)_applyLoudnessInfo;
-(void)_updateBookmarkTimeIfNecessary:(double)arg1 isCheckpoint:(bool)arg2 ;
-(id)_chapterTitleForTime:(double)arg1 ;
-(void)handlePlaybackFinishedTime:(double)arg1 finishedByHittingEnd:(bool)arg2 ;
-(id)initWithMediaItem:(id)arg1 nowPlayingItemOptions:(unsigned long long)arg2 ;
-(unsigned long long)nowPlayingItemOptions;
-(id)description;
-(unsigned long long)type;
-(void).cxx_destruct;
-(unsigned long long)persistentID;
-(float)userRating;
-(id)album;
@end

