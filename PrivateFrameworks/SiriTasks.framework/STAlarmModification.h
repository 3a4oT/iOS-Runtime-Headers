/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

@interface STAlarmModification : STSiriModelObject {
    int  _addedFrequency;
    NSURL * _alarmId;
    NSNumber * _enabled;
    NSNumber * _hour;
    NSString * _label;
    NSNumber * _minute;
    int  _removedFrequency;
}

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithAddedFrequency:(int)arg1 alarmId:(id)arg2 enabled:(id)arg3 hour:(id)arg4 label:(id)arg5 minute:(id)arg6 removedFrequency:(int)arg7;
- (int)addedFrequency;
- (id)alarmId;
- (id)enabled;
- (void)encodeWithCoder:(id)arg1;
- (id)hour;
- (id)initWithCoder:(id)arg1;
- (id)label;
- (id)minute;
- (int)removedFrequency;

@end