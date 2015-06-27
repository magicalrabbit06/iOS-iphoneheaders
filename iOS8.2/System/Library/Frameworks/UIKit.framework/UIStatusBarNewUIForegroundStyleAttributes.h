/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:14 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIStatusBarForegroundStyleAttributes.h>

@class NSString, UIColor;

@interface UIStatusBarNewUIForegroundStyleAttributes : UIStatusBarForegroundStyleAttributes {

	NSString* _uniqueIdentifier;
	char _isTintColorBlack;
	char _hasBusyBackground;
	UIColor* _tintColor;

}

@property (nonatomic,retain,readonly) UIColor * tintColor;              //@synthesize tintColor=_tintColor - In the implementation block
-(void)dealloc;
-(UIColor *)tintColor;
-(id)textColorForStyle:(int)arg1 ;
-(id)uniqueIdentifier;
-(id)initWithHeight:(float)arg1 legibilityStyle:(int)arg2 tintColor:(id)arg3 hasBusyBackground:(char)arg4 ;
-(float)edgePadding;
-(id)imageNamed:(id)arg1 withLegibilityStyle:(int)arg2 legibilityStrength:(float)arg3 ;
-(id)textForNetworkType:(int)arg1 ;
-(id)batteryImageNameWithCapacity:(float)arg1 ;
-(float)batteryAccessoryMargin;
-(void)drawBatteryInsidesWithSize:(CGSize)arg1 capacity:(float)arg2 charging:(char)arg3 ;
-(id)bluetoothBatteryImageNameWithCapacity:(float)arg1 ;
-(void)drawBluetoothBatteryInsidesWithSize:(CGSize)arg1 capacity:(float)arg2 ;
-(float)bluetoothBatteryExtraPadding;
-(int)activityIndicatorStyleWithSyncActivity:(char)arg1 ;
-(float)sizeForMoonMaskVisible:(char)arg1 ;
-(CGPoint)positionForMoonMaskInBounds:(CGRect)arg1 ;
-(float)textOffsetForStyle:(int)arg1 ;
-(id)expandedNameForImageName:(id)arg1 ;
-(id)makeTextFontForStyle:(int)arg1 ;
-(id)initWithHeight:(float)arg1 legibilityStyle:(int)arg2 ;
-(UIEdgeInsets)edgeInsetsForBatteryInsides;
-(float)_roundDimension:(float)arg1 ;
-(id)_batteryColorForCapacity:(float)arg1 lowCapacity:(float)arg2 charging:(char)arg3 ;
-(UIEdgeInsets)edgeInsetsForBluetoothBatteryInsides;
-(char)_shouldUseBoldFontForStyle:(int)arg1 ;
-(id)proportionalFontForFont:(id)arg1 ;
@end
