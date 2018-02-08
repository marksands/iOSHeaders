//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SXTopVideoControlsProviding.h"

@class NSString, SXAdPrivacyButton, SXLearnMoreButton, SXMediaSelectionButton, SXVolumeButton;

@interface SXTopVideoControlsProvider : NSObject <SXTopVideoControlsProviding>
{
    SXVolumeButton *_volumeButton;
    SXMediaSelectionButton *_mediaSelectionButton;
    SXLearnMoreButton *_learnMoreButton;
    SXAdPrivacyButton *_adPrivacyButton;
}

@property(readonly, nonatomic) SXAdPrivacyButton *adPrivacyButton; // @synthesize adPrivacyButton=_adPrivacyButton;
@property(readonly, nonatomic) SXLearnMoreButton *learnMoreButton; // @synthesize learnMoreButton=_learnMoreButton;
@property(readonly, nonatomic) SXMediaSelectionButton *mediaSelectionButton; // @synthesize mediaSelectionButton=_mediaSelectionButton;
@property(readonly, nonatomic) SXVolumeButton *volumeButton; // @synthesize volumeButton=_volumeButton;
- (void).cxx_destruct;
- (id)initWithVolumeButton:(id)arg1 mediaSelectionButton:(id)arg2 learnMoreButton:(id)arg3 adPrivacyButton:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
