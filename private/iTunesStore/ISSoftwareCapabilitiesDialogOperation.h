//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSDictionary;

@interface ISSoftwareCapabilitiesDialogOperation : ISOperation
{
    NSDictionary *_mismatches;
    id _requiredCapabilities;
}

- (void)_postDefaultDialog;
- (void)run;
@property(readonly) id requiredCapabilities;
@property(readonly) NSDictionary *mismatches;
- (void)dealloc;
- (id)initWithRequiredCapabilities:(id)arg1 mismatches:(id)arg2;

@end

