/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:12 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@protocol AlarmActiveDelegate;
@class AlarmView;

@interface AlarmTableViewCell : UITableViewCell {

	<AlarmActiveDelegate>* _alarmActiveDelegate;
	AlarmView* _alarmView;
	BOOL _enabled;

}
+(float)defaultHeight;
-(void)refreshUI:(id)arg1 animated:(BOOL)arg2 ;
-(void)setAlarmActiveDelegate:(id)arg1 ;
-(void)_alarmActiveChanged:(id)arg1 ;
-(void)internalSetBackgroundColor:(id)arg1 ;
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)willTransitionToState:(unsigned)arg1 ;
@end

