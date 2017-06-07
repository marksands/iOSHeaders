//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CNObservable, CNUILikenessRenderingScope, NSArray;
@protocol CNCancelable;

@interface CNUIRenderedLikenessCacheEntry : NSObject
{
    id <CNCancelable> _token;
    CNObservable *_imageObservable;
    NSArray *_contacts;
    CNUILikenessRenderingScope *_scope;
}

+ (id)entryWithObservable:(id)arg1 token:(id)arg2 contacts:(id)arg3 scope:(id)arg4;
@property(readonly, nonatomic) CNUILikenessRenderingScope *scope; // @synthesize scope=_scope;
@property(readonly, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
@property(readonly, nonatomic) CNObservable *imageObservable; // @synthesize imageObservable=_imageObservable;
@property(readonly, nonatomic) id <CNCancelable> token; // @synthesize token=_token;
- (void).cxx_destruct;
- (id)description;
- (id)initWithObservable:(id)arg1 token:(id)arg2 contacts:(id)arg3 scope:(id)arg4;

@end

