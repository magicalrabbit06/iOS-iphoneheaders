/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:50:39 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/NSCopying.h>
#import <AVConference/NSCoding.h>

@interface VideoAttributes : NSObject <NSCopying, NSCoding> {

	CGSize ratio;
	int orientation;
	int camera;
	char cameraSwitching;
	CGRect contentsRect;

}

@property (assign,nonatomic) CGSize ratio; 
@property (assign,nonatomic) int orientation; 
@property (assign,nonatomic) int camera; 
@property (assign,nonatomic) char cameraSwitching; 
@property (assign,nonatomic) CGRect contentsRect; 
+(id)videoAttributesWithVideoAttributes:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(int)orientation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setContentsRect:(CGRect)arg1 ;
-(void)setOrientation:(int)arg1 ;
-(CGRect)contentsRect;
-(id)initWithEncodedDictionary:(id)arg1 ;
-(void)decodeFromNSDictionary:(id)arg1 ;
-(id)encodeToNewNSDictionary;
-(CGSize)ratio;
-(void)setRatio:(CGSize)arg1 ;
-(char)cameraSwitching;
-(void)setCameraSwitching:(char)arg1 ;
-(id)initWithCameraStatusBits:(unsigned char)arg1 aspectRatio:(CGSize)arg2 contentsRect:(CGRect)arg3 ;
-(char)isEqualToVideoAttributes:(id)arg1 ;
-(int)camera;
-(void)setCamera:(int)arg1 ;
@end
