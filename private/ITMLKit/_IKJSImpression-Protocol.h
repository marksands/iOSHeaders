//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/IKJSImpression-Protocol.h>
#import <ITMLKit/JSExport-Protocol.h>

@class NSArray, NSString;

@protocol _IKJSImpression <IKJSImpression, JSExport>
@property(readonly, nonatomic) NSString *impressionQueueTag;
@property(readonly, nonatomic) long long index;
@property(readonly, nonatomic) id parent;
@property(readonly, nonatomic) NSArray *children;
@property(readonly, nonatomic) NSArray *timestamps;
@property(readonly, nonatomic) NSString *data;
@end

