//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoardServices/FBSSettingsDiff.h>

@interface FBSSceneSettingsDiff : FBSSettingsDiff
{
}

+ (id)diffFromSettings:(id)arg1 toSettings:(id)arg2;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)settingsByApplyingToMutableCopyOfSettings:(id)arg1;
- (void)evaluateWithInspector:(id)arg1 context:(void *)arg2;

@end

