//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CallKit/CXCallAction.h>

@class NSUUID;

@interface CXSetGroupCallAction : CXCallAction
{
    NSUUID *_callUUIDToGroupWith;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSUUID *callUUIDToGroupWith; // @synthesize callUUIDToGroupWith=_callUUIDToGroupWith;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (id)customDescription;
- (id)initWithCallUUID:(id)arg1 callUUIDToGroupWith:(id)arg2;

@end

