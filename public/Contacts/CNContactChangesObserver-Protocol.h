//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNContact, NSString;

@protocol CNContactChangesObserver <NSObject>
- (void)contactDidChange:(CNContact *)arg1;

@optional
- (void)contactWithIdentifierWasDeleted:(NSString *)arg1;
@end

