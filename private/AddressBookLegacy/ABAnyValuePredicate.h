//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBookLegacy/ABPredicate.h>

@interface ABAnyValuePredicate : ABPredicate
{
    int _property;
}

@property(nonatomic) int property; // @synthesize property=_property;
- (void)ab_bindWhereClauseComponentOfStatement:(struct CPSqliteStatement *)arg1 withBindingOffset:(int *)arg2 predicateIdentifier:(int)arg3;
- (id)queryWhereStringForPredicateIdentifier:(int)arg1;
- (id)queryGroupByProperties;
- (id)queryJoinsInCompound:(_Bool)arg1 predicateIdentifier:(int)arg2;
- (_Bool)isValid;
- (id)init;

@end

