//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@interface PXSharingSettings : PXSettings
{
    _Bool _showConfidentialityWarnings;
    _Bool _showInternalGIFExport;
    unsigned long long _confidentialityWarningsVersion;
}

+ (id)sharedInstance;
+ (id)settingsControllerModule;
@property(nonatomic) unsigned long long confidentialityWarningsVersion; // @synthesize confidentialityWarningsVersion=_confidentialityWarningsVersion;
@property(nonatomic) _Bool showInternalGIFExport; // @synthesize showInternalGIFExport=_showInternalGIFExport;
@property(nonatomic) _Bool showConfidentialityWarnings; // @synthesize showConfidentialityWarnings=_showConfidentialityWarnings;
- (id)debugDescription;
- (void)defaultValueDidChangeForKey:(id)arg1;
- (void)setDefaultValues;
- (id)parentSettings;

@end

