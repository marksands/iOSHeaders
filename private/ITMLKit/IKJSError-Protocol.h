//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"

@class IKJSError, NSDictionary, NSNumber, NSString;

@protocol IKJSError <JSExport>
@property(readonly, nonatomic) IKJSError *underlyingError;
@property(readonly, nonatomic) NSDictionary *userInfo;
@property(readonly, nonatomic) NSString *recoverySuggestion;
@property(readonly, nonatomic) NSString *failureReason;
@property(readonly, nonatomic) NSString *description;
@property(readonly, nonatomic) NSString *domain;
@property(readonly, nonatomic) NSNumber *code;
@end

