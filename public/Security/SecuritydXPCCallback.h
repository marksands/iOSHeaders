//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SecuritydXPCCallbackProtocol.h"

__attribute__((visibility("hidden")))
@interface SecuritydXPCCallback : NSObject <SecuritydXPCCallbackProtocol>
{
    CDUnknownBlockType _callback;
}

@property(copy) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void).cxx_destruct;
- (void)callCallback:(_Bool)arg1 error:(id)arg2;
- (id)initWithCallback:(CDUnknownBlockType)arg1;

@end

