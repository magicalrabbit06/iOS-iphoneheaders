/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:26:39 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Assistant/UIPlugins/Maps.siriUIBundle/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString;


@protocol MKAnnotation <NSObject>
@property (nonatomic,readonly) SCD_Struct_MA0 coordinate; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@optional
-(NSString *)title;
-(NSString *)subtitle;
-(void)setCoordinate:(SCD_Struct_MA0)arg1;

@required
-(SCD_Struct_MA0)coordinate;

@end
