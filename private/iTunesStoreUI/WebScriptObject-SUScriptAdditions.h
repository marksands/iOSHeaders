//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WebScriptObject.h"

@interface WebScriptObject (SUScriptAdditions)
- (id)safeValueForKey:(id)arg1;
- (id)safeCallWebScriptMethod:(id)arg1 withArguments:(id)arg2;
- (id)copyValuesForKeys:(id)arg1;
- (id)copyJSONDataWithContext:(struct OpaqueJSContext *)arg1;
- (id)copyArrayOrDictionaryWithContext:(struct OpaqueJSContext *)arg1;
- (id)copyArrayValueWithValidator:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2;
@end

