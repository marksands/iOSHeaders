//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKit/CKEncryptedData.h>

#import "CKRecordValue.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface CKEncryptedString : CKEncryptedData <CKRecordValue, NSCopying, NSSecureCoding>
{
}

- (id)value;
@property(readonly, nonatomic) NSString *string;
- (id)initWithString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

