/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:26:40 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Assistant/UIPlugins/Movies.siriUIBundle/Movies
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Movies/Movies-Structs.h>
#import <Movies/NSFastEnumeration.h>

@class NSMutableArray;

@interface SiriMoviesShowtimeLabelGroup : NSObject <NSFastEnumeration> {

	unsigned long long _count;
	NSMutableArray* _labels;

}

@property (nonatomic,readonly) unsigned long long count;                                 //@synthesize count=_count - In the implementation block
@property (getter=_labels,nonatomic,copy,readonly) NSMutableArray * labels;              //@synthesize labels=_labels - In the implementation block
-(id)_labels;
-(void)enumerateLabelsUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_Si0*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)count;
-(id)init;
-(void)removeFromSuperview;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(void)addLabel:(id)arg1 ;
@end
