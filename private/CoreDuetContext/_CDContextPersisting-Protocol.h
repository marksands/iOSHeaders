//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSDate, NSDictionary, _CDContextValue, _CDContextualChangeRegistration, _CDContextualKeyPath;

@protocol _CDContextPersisting
- (void)deleteDataCreatedBefore:(NSDate *)arg1;
- (void)deleteAllData;
- (NSArray *)loadRegistrations;
- (NSDictionary *)loadValues;
- (void)deleteRegistration:(_CDContextualChangeRegistration *)arg1;
- (void)saveRegistration:(_CDContextualChangeRegistration *)arg1;
- (void)saveValue:(_CDContextValue *)arg1 forKeyPath:(_CDContextualKeyPath *)arg2;
@end

