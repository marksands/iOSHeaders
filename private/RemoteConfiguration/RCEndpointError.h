//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface RCEndpointError : NSObject
{
    NSString *_errorCode;
    NSString *_message;
    NSString *_stacktrace;
}

+ (id)endpointErrorWithDictionary:(id)arg1;
@property(readonly, copy, nonatomic) NSString *stacktrace; // @synthesize stacktrace=_stacktrace;
@property(readonly, copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, copy, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithErrorCode:(id)arg1 message:(id)arg2 stacktrace:(id)arg3;

@end

