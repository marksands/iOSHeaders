//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MusicLibrary/ML3Predicate.h>

@interface ML3ConditionalPredicate : ML3Predicate
{
    ML3Predicate *_conditionPredicate;
    ML3Predicate *_thenPredicate;
    ML3Predicate *_elsePredicate;
}

+ (id)predicateWithConditionPredicate:(id)arg1 thenPredicate:(id)arg2 elsePredicate:(id)arg3;
@property(readonly, copy, nonatomic) ML3Predicate *elsePredicate; // @synthesize elsePredicate=_elsePredicate;
@property(readonly, copy, nonatomic) ML3Predicate *thenPredicate; // @synthesize thenPredicate=_thenPredicate;
@property(readonly, copy, nonatomic) ML3Predicate *conditionPredicate; // @synthesize conditionPredicate=_conditionPredicate;
- (void).cxx_destruct;
- (id)spotlightPredicate;
- (_Bool)isDynamicForEntityClass:(Class)arg1;
- (id)databaseStatementParameters;
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;
- (id)SQLJoinClausesForClass:(Class)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConditionPredicate:(id)arg1 thenPredicate:(id)arg2 elsePredicate:(id)arg3;

@end

