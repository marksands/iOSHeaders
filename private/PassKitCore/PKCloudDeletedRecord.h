//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class CKRecordID, NSString;

@interface PKCloudDeletedRecord : NSObject <NSSecureCoding>
{
    CKRecordID *_recordID;
    NSString *_recordType;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *recordType; // @synthesize recordType=_recordType;
@property(readonly, nonatomic) CKRecordID *recordID; // @synthesize recordID=_recordID;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordID:(id)arg1 recordType:(id)arg2;

@end

