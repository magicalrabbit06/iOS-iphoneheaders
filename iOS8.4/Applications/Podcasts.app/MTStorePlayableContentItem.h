/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:00 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/MTPlayableContentItem.h>

@class NSDictionary;

@interface MTStorePlayableContentItem : MTPlayableContentItem {

	NSDictionary* _dict;

}

@property (nonatomic,retain) NSDictionary * dict;              //@synthesize dict=_dict - In the implementation block
-(id)_artworkURLString;
-(void)loadArtwork;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)dict;
-(void)setDict:(NSDictionary *)arg1 ;
@end

