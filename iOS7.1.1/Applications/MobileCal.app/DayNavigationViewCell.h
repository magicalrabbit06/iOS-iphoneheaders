/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:04 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <UIKit/UIControl.h>

@protocol DayNavigationViewCellDelegate;
@class NSDate, NSObject;

@interface DayNavigationViewCell : UIControl {

	BOOL _circled;
	BOOL _isToday;
	BOOL _isWeekend;
	NSDate* _date;
	NSObject<DayNavigationViewCellDelegate>* _delegate;

}

@property (nonatomic,retain) NSDate * date;                                                          //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) BOOL circled;                                                           //@synthesize circled=_circled - In the implementation block
@property (assign,nonatomic) BOOL isToday;                                                           //@synthesize isToday=_isToday - In the implementation block
@property (assign,nonatomic) BOOL isWeekend;                                                         //@synthesize isWeekend=_isWeekend - In the implementation block
@property (assign,nonatomic,__weak) NSObject<DayNavigationViewCellDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
+(void)localeChanged;
-(void)setCircled:(BOOL)arg1 ;
-(void)setIsToday:(BOOL)arg1 ;
-(void)setIsWeekend:(BOOL)arg1 ;
-(BOOL)isToday;
-(BOOL)isWeekend;
-(void)setCircled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)circled;
-(void)setDate:(id)arg1 forceStringUpdate:(BOOL)arg2 ;
-(void)pulseToday;
-(void)stopPulsing;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)description;
-(id)delegate;
-(id)date;
-(void)prepareForReuse;
-(void)setDate:(id)arg1 ;
-(void).cxx_destruct;
@end

