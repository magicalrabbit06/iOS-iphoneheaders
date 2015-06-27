/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:24 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebContentAnalysis/WebContentAnalysis-Structs.h>
@class NSNumber;

@interface WFLSMMap : NSObject {

	LSMMapRef map;
	NSNumber* threshold;

}

@property (copy) NSNumber * threshold; 
+(id)mapFromFilePath:(id)arg1 ;
+(id)mapWithMap:(LSMMapRef)arg1 ;
+(id)mapFromURL:(id)arg1 ;
-(void)_setMap:(LSMMapRef)arg1 ;
-(void)dealloc;
-(long)numberOfCategories;
-(id)initWithMap:(LSMMapRef)arg1 ;
-(void)setThreshold:(NSNumber *)arg1 ;
-(NSNumber *)threshold;
-(id)evaluate:(id)arg1 ;
-(id)wordDump:(id)arg1 ;
-(id)initWithMapFromURL:(id)arg1 ;
-(id)initWithMapFromFilePath:(id)arg1 ;
-(LSMTextRef)_createLSMTextFromString:(id)arg1 ;
-(LSMMapRef)_map;
@end
