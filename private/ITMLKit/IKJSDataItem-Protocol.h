//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/JSExport-Protocol.h>

@class JSValue, NSString;

@protocol IKJSDataItem <JSExport>
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) NSString *type;
- (void)touchPropertyPath:(NSString *)arg1;
- (JSValue *)getPropertyPath:(NSString *)arg1;
- (void)setPropertyPath:(NSString *)arg1:(JSValue *)arg2;
- (id)initWithType:(NSString *)arg1:(NSString *)arg2;
@end

