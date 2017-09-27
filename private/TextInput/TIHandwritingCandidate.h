//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TextInput/TIKeyboardCandidateSingle.h>

@interface TIHandwritingCandidate : TIKeyboardCandidateSingle
{
    unsigned long long _uniqueID;
    unsigned long long _completionUniqueID;
}

+ (int)type;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long completionUniqueID; // @synthesize completionUniqueID=_completionUniqueID;
@property(readonly, nonatomic) unsigned long long uniqueID; // @synthesize uniqueID=_uniqueID;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (id)initWithCandidateResultSetCoder:(id)arg1;
- (_Bool)isInlineCompletionCandidate;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 uniqueID:(unsigned long long)arg3 completionUniqueID:(unsigned long long)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

