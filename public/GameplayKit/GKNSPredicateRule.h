//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameplayKit/GKRule.h>

@class NSPredicate;

@interface GKNSPredicateRule : GKRule
{
    NSPredicate *_predicate;
}

@property(readonly, retain, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
- (void).cxx_destruct;
- (_Bool)evaluatePredicateWithSystem:(id)arg1;
- (id)initWithPredicate:(id)arg1;

@end

