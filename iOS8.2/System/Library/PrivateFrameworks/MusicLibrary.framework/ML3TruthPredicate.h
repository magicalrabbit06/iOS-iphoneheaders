/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:28 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicLibrary/ML3Predicate.h>

@interface ML3TruthPredicate : ML3Predicate {

	char _truthValue;

}
+(id)truePredicate;
+(id)falsePredicate;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2 ;
-(char)isTrueAlways;
-(char)isFalseAlways;
-(id)_predicateString;
@end
