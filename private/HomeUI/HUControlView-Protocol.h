//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol HUControlView <NSObject>
+ (Class)valueClass;
@property(nonatomic, getter=isDisabled) _Bool disabled;
@property(retain, nonatomic) id value;
@property(nonatomic) __weak id <HUControlViewDelegate> delegate;
@property(copy, nonatomic) NSString *identifier;

@optional
@property(nonatomic) _Bool canBeHighlighted;
@end

