//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"

@class IKDOMEvent, JSValue, NSString;

@protocol IKJSDOMEventTarget <JSExport>
- (_Bool)dispatchEvent:(IKDOMEvent *)arg1;
- (void)removeEventListener:(NSString *)arg1:(JSValue *)arg2:(_Bool)arg3;
- (void)addEventListener:(NSString *)arg1:(JSValue *)arg2:(_Bool)arg3;
@end

