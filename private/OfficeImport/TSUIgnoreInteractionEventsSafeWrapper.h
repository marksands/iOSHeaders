//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface TSUIgnoreInteractionEventsSafeWrapper : NSObject
{
    id <TSUTraceableResourceToken> _token;
    CDUnknownBlockType _operationCompletionHandler;
}

- (void).cxx_destruct;
- (id)description;
- (void)resumeIgnoringInteractionEventsSafely;
- (void)suspendIgnoringInteractionEventsTemporarily;
- (void)endIgnoringInteractionEventsSafely;
- (void)dealloc;
- (id)initWithToken:(id)arg1;
- (id)init;

@end
