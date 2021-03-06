//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"

@class IKDOMLSInput, IKDOMLSParser, IKDOMLSSerializer, NSString;

@protocol IKJSDOMImplementationLS <JSExport>
@property(readonly, getter=asynchronousMode) long long MODE_ASYNCHRONOUS;
@property(readonly, getter=synchronousMode) long long MODE_SYNCHRONOUS;
- (IKDOMLSInput *)createLSInput;
- (IKDOMLSSerializer *)createLSSerializer;
- (IKDOMLSParser *)createLSParser:(long long)arg1:(NSString *)arg2;
@end

