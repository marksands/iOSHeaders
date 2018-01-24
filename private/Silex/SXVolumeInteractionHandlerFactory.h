//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SXVideoInteractionHandlerFactory.h"

@class NSString, SXVolumeController;

@interface SXVolumeInteractionHandlerFactory : NSObject <SXVideoInteractionHandlerFactory>
{
    SXVolumeController *_volumeController;
}

@property(readonly, nonatomic) SXVolumeController *volumeController; // @synthesize volumeController=_volumeController;
- (void).cxx_destruct;
- (id)createInteractionHandlerForVideo:(id)arg1;
- (id)initWithVolumeController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

