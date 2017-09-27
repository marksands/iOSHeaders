//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface NUPlatform : NSObject
{
    _Bool _supportsAutomaticGraphicsSwitching;
    _Bool _hasHeadlessGPU;
    _Bool _hasExtendedColorDisplay;
    NSString *_name;
    NSArray *_devices;
    id <NUDevice> _mainDevice;
    id <NUDevice> _integratedDevice;
    id <NUDevice> _discreteDevice;
    id <NUDevice> _headlessDevice;
    id <NUDevice> _cpuDevice;
}

+ (id)currentPlatform;
@property(nonatomic) _Bool hasExtendedColorDisplay; // @synthesize hasExtendedColorDisplay=_hasExtendedColorDisplay;
@property(retain, nonatomic) id <NUDevice> cpuDevice; // @synthesize cpuDevice=_cpuDevice;
@property(retain, nonatomic) id <NUDevice> headlessDevice; // @synthesize headlessDevice=_headlessDevice;
@property(nonatomic) _Bool hasHeadlessGPU; // @synthesize hasHeadlessGPU=_hasHeadlessGPU;
@property(retain, nonatomic) id <NUDevice> discreteDevice; // @synthesize discreteDevice=_discreteDevice;
@property(retain, nonatomic) id <NUDevice> integratedDevice; // @synthesize integratedDevice=_integratedDevice;
@property(nonatomic) _Bool supportsAutomaticGraphicsSwitching; // @synthesize supportsAutomaticGraphicsSwitching=_supportsAutomaticGraphicsSwitching;
@property(readonly, nonatomic) id <NUDevice> mainDevice; // @synthesize mainDevice=_mainDevice;
@property(copy, nonatomic) NSArray *devices; // @synthesize devices=_devices;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool supportsLiveVideoRendering;
@property(readonly, nonatomic) _Bool defaultSupportsLiveVideoRendering;
@property(readonly, nonatomic) NSArray *displays;
- (void)clearCaches;
- (id)defaultDevice;
- (id)debugDescription;
- (id)description;

@end

