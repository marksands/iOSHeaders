//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NARApplicationWorkspace, NSMutableSet;

@interface NanoAppDataProvider : NSObject
{
    NARApplicationWorkspace *_narWorkspace;
    NSMutableSet *_appsOnNano;
}

@property(retain, nonatomic) NSMutableSet *appsOnNano; // @synthesize appsOnNano=_appsOnNano;
@property(retain, nonatomic) NARApplicationWorkspace *narWorkspace; // @synthesize narWorkspace=_narWorkspace;
- (void).cxx_destruct;
- (void)_appsDidChange:(CDUnknownBlockType)arg1;
- (void)isInstalledOnWatch:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)watchBundleIDForFirstPartyCompanionBundleID:(id)arg1;
- (void)start:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

