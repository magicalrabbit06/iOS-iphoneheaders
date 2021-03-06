/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:08 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <Podcasts/TKView.h>

@class TKArtworkView, UIImageView, NSMutableArray, UIButton, TKDetailsLockupComponent;

@interface TKDetailsLockup : TKView {

	TKArtworkView* _artwork;
	UIImageView* _explicitView;
	NSMutableArray* _labels;
	UIButton* _playButton;

}

@property (retain) TKDetailsLockupComponent * component; 
@property (retain) UIButton * playButton;                             //@synthesize playButton=_playButton - In the implementation block
+(CGRect)rectForBounds:(CGRect)arg1 withTop:(float)arg2 withTheme:(id)arg3 withComponent:(id)arg4 ;
+(CGRect)rectForArtwork:(id)arg1 ;
+(CGSize)titleSizeForLabel:(id)arg1 withIntialBounds:(CGSize)arg2 withTheme:(id)arg3 ;
-(void)setPlayButton:(UIButton *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 withComponent:(id)arg2 withTheme:(id)arg3 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)renderView;
-(UIButton *)playButton;
-(void)play:(id)arg1 ;
@end

