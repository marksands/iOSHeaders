//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSSet, NSString;

@protocol CADAccountAccessHandler
- (void)reset;
- (NSSet *)restrictedCalendarRowIDsForAction:(unsigned long long)arg1;
- (_Bool)isActionAllowed:(unsigned long long)arg1 forAccountIdentifier:(NSString *)arg2;
- (_Bool)isAccountManaged:(NSString *)arg1;
@end

