//  ProWidgets
//  Revolutionary widget suite and framework for iOS
//  Copyright 2014 Alan Yip. All rights reserved.

typedef NS_ENUM(NSUInteger, AlarmSoundType) {
	AlarmSoundTypeRingtone = 1,
	AlarmSoundTypeSong = 2
};

typedef enum {
	AlarmDaySettingAlways	= 0,
	AlarmDaySettingMonday	= 1 << 0,
	AlarmDaySettingTuesday	= 1 << 1,
	AlarmDaySettingWednesday= 1 << 2,
	AlarmDaySettingThursday	= 1 << 3,
	AlarmDaySettingFriday	= 1 << 4,
	AlarmDaySettingSaturday	= 1 << 5,
	AlarmDaySettingSunday	= 1 << 6
} AlarmDaySetting;

@interface PWAPIAlarmManager : NSObject

+ (AlarmSoundType)soundTypeFromInteger:(NSUInteger)number;

// retrieve alarm objects
+ (NSArray *)allAlarms;
+ (PWAPIAlarm *)alarmWithId:(NSString *)alarmId;

// add a new alarm
+ (PWAPIAlarm *)addAlarmWithTitle:(NSString *)title active:(BOOL)active hour:(NSUInteger)hour minute:(NSUInteger)minute daySetting:(AlarmDaySetting)daySetting allowsSnooze:(BOOL)allowsSnooze sound:(NSString *)sound soundType:(AlarmSoundType)soundType;

// remove alarms
+ (void)removeAlarmWithId:(NSString *)alarmId;
+ (void)removeAlarm:(PWAPIAlarm *)alarm;

// default sound
+ (NSString *)defaultSound;
+ (AlarmSoundType)defaultSoundType;
+ (void)setDefaultSound:(NSString *)identifier ofType:(AlarmSoundType)type;

@end

// This wraps the existing Alarm class to ensure that all
// changes are synchronized with the MobileTimer app
@interface PWAPIAlarm : NSObject

@property(nonatomic, readonly) NSString *alarmId;
@property(nonatomic, copy) NSString *title;
@property(nonatomic) BOOL active;
@property(nonatomic) NSUInteger hour;
@property(nonatomic) NSUInteger minute;
@property(nonatomic) AlarmDaySetting daySetting;
@property(nonatomic) BOOL allowsSnooze;
@property(nonatomic, readonly) NSString *sound;
@property(nonatomic, readonly) AlarmSoundType soundType;

+ (instancetype)alarmWithId:(NSString *)alarmId;
- (void)setSound:(NSString *)sound ofType:(NSInteger)type;

@end