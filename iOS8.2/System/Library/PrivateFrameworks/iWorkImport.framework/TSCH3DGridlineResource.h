/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:07 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSCH3DResource.h>

@class TSCH3DAxisGridEnumerator, TSDStroke;

@interface TSCH3DGridlineResource : TSCH3DResource {

	TSCH3DAxisGridEnumerator* mAxis;

}

@property (nonatomic,readonly) char enabled; 
@property (nonatomic,readonly) TSDStroke * stroke; 
@property (nonatomic,readonly) float opacity; 
+(id)resourceWithAxisEnumerator:(id)arg1 ;
-(id)initWithAxisEnumerator:(id)arg1 ;
-(void)dealloc;
-(TSDStroke *)stroke;
-(float)opacity;
-(char)enabled;
-(id)get;
@end

