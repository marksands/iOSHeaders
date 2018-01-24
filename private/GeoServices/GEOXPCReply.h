//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSError, NSObject<OS_xpc_object>;

@interface GEOXPCReply : NSObject <NSSecureCoding>
{
    unsigned char _flags;
    NSObject<OS_xpc_object> *_object;
    NSError *_error;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) unsigned char flags; // @synthesize flags=_flags;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSObject<OS_xpc_object> *object; // @synthesize object=_object;
- (void).cxx_destruct;
- (void)send;
- (id)description;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *replyDictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequest:(id)arg1;
- (id)init;

@end

