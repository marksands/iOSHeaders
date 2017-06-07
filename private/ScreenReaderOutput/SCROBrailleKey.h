//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <ScreenReaderOutput/NSCoding-Protocol.h>

@class NSMutableArray, NSString;

@interface SCROBrailleKey : NSObject <NSCoding>
{
    NSMutableArray *_maskArray;
    NSString *_identifier;
    long long _routerIndex;
    long long _routerToken;
    long long _routerLocation;
    _Bool _hasRouterInfo;
    id _appToken;
    int _displayToken;
    int _displayMode;
}

- (void).cxx_destruct;
- (_Bool)getRouterIndex:(long long *)arg1 token:(long long *)arg2 location:(long long *)arg3 appToken:(id *)arg4;
- (void)setRouterIndex:(long long)arg1 token:(long long)arg2 location:(long long)arg3 appToken:(id)arg4;
- (id)identifier;
- (id)keyMasks;
- (void)addKeyMask:(unsigned int)arg1;
- (id)description;
- (int)displayMode;
- (void)setDisplayMode:(int)arg1;
- (int)displayToken;
- (void)setDisplayToken:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)addModifierMask:(unsigned int)arg1;
- (void)addSpacebarKeyMask;

@end

