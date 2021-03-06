/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:00 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSOrderedSet, MTPlaylist, MTPodcast;

@interface MTPodcastPlaylistSettings : NSManagedObject

@property (assign,nonatomic) int downloaded; 
@property (assign,nonatomic) long long episodesToShow; 
@property (assign,nonatomic) long long flags; 
@property (assign,nonatomic) long long mediaType; 
@property (assign,nonatomic) long long playOrder; 
@property (assign,nonatomic) char showPlayedEpisodes; 
@property (assign,nonatomic) long long sortOrder; 
@property (nonatomic,retain) NSString * uuid; 
@property (assign,nonatomic) char visible; 
@property (nonatomic,retain) NSOrderedSet * episodes; 
@property (nonatomic,retain) MTPlaylist * playlist; 
@property (nonatomic,retain) MTPlaylist * playlistIfDefault; 
@property (nonatomic,retain) MTPodcast * podcast; 
+(id)insertNewSettingsInManagedObjectContext:(id)arg1 ;
+(id)stringForEpisodes:(long long)arg1 short:(char)arg2 defaultValue:(long long)arg3 ;
+(id)stringForOrder:(int)arg1 short:(char)arg2 ;
+(id)stringForMedia:(int)arg1 short:(char)arg2 ;
+(id)episodesOptionArray:(char)arg1 defaultValue:(long long)arg2 ;
+(id)episodesOptionValues;
+(id)orderOptionArray:(char)arg1 ;
+(id)orderOptionValues;
+(id)mediaOptionArray:(char)arg1 ;
+(id)mediaOptionValues;
-(void)setTracksDefault:(char)arg1 ;
-(double)latestEpisodeDate;
-(double)oldestEpisodeDate;
-(id)predicateForSettings;
-(int)integerForEpisodesToShow;
-(char)tracksDefault;
-(void)takeValuesFromDefaultSettings:(id)arg1 ;
-(void)setNeedsUpdate:(char)arg1 ;
-(char)needsUpdate;
@end

