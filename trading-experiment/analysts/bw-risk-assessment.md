# BW Risk Assessment — Bridgewater-Style Risk Report
**Date: 2026-07-17 (~10:41 ET)**

*Persona: Bridgewater risk desk, radical transparency. Ground truth pulled live via Robinhood (`get_portfolio`, `get_equity_positions`, `get_equity_quotes`, account 424593861) this run. First report since this morning's OMCL fallback execution.*

---

## Overall Portfolio Risk Grade: **C** (upgraded from 7/16's C-)

**Why the upgrade, stated plainly**: this is not a "the market got calmer" upgrade — the tape is worse today than yesterday. It's an upgrade because the trader actually did the thing this desk had been flagging for a week: opened OMCL and materially cut Technology look-through concentration from 47.8% to 39.3% of deployed capital in one trade. That's genuine structural risk reduction, not price drift. It does not earn better than a C because (a) cash is still 44.2% of the trading pool — a second straight cycle over BR's own 25% cash-floor trigger — and (b) the AI-capex-digestion risk this desk has tracked all week just picked up its first hard evidence of a demand-side (not just regulatory/hedging) threat: reports that Meta plans to resell surplus AI compute capacity, which is a different and arguably more serious signal than anything cited yesterday.

## Biggest risk right now
**The chip-sector selloff has gone from one story (TSMC capex guidance) to five independent, converging bear threads in 48 hours — and OMCL's "decoupled" diversification thesis had its first same-direction down day today, right as that thesis needs to hold.** Since yesterday's report this desk had two structural flags (NY's Hochul data-center moratorium, CoreWeave exploring chip-price hedges). Fresh research this run adds three more, all pointing the same direction: **(1)** reports that Meta is building "Meta Compute," a unit to resell surplus AI training/inference capacity to enterprises — the first credible signal that AI-infrastructure *supply* may be starting to catch up with demand, a fundamentally different (and more dangerous) risk than a sentiment pullback; **(2)** SK Hynix reportedly slowing HBM expansion and shifting toward lower-cost commodity DRAM; **(3)** Intel's 18A foundry process reportedly won't reach profitable yields until late 2026/2027. The Philadelphia Semiconductor Index (SOX) is on pace for its steepest weekly decline in over a year (~11% this week per Fortune's 7/17 report), and the selloff is now visibly global — SoftBank -9%+ overnight in Asia trade tracking the same rout. Separately and not fully independent: OMCL, the position bought specifically because it doesn't correlate with this exact risk factor, is down -1.51% today, its first down day moving in the same direction as NVDA/VTI/VXUS since the position opened this morning. One data point doesn't break the decoupling thesis (today's move is small and could just be general risk-off, not chip-specific), but it's the first day this desk can't point to OMCL as clean same-day proof of the diversification working — worth tracking closely, not glossing over.

---

## Heat Map Summary

| Risk Category | Level | Notes |
|---|---|---|
| Sector concentration (look-through, Technology) | 🟠 High (downgraded from 🔴 Critical) | ~39.26% of deployed capital, down from 47.8% pre-OMCL — the first real move on this number in two weeks, driven entirely by OMCL's addition (0% tech) diluting the base, not by NVDA/VTI/VXUS getting smaller as a share |
| Chip-sector / semiconductor correlation | 🔴 Critical, deepening further | SOX on pace for steepest weekly drop in 1+ year; selloff now has 5 distinct catalysts (TSMC capex guidance, Hochul moratorium, CoreWeave hedging, Meta Compute supply-glut signal, SK Hynix HBM pullback, Intel 18A delay) vs. 2-3 cited a week ago |
| AI-capex / infrastructure risk (**escalated this cycle**) | 🟠 High, up from 🟡 Moderate | Meta Compute reports are the first *demand-normalization* signal in this desk's tracking, distinct in kind from the regulatory (Hochul) and hedging (CoreWeave) signals already flagged — a supply-catches-up-to-demand story is a more direct threat to the AI-capex bull case than either prior flag |
| Single-stock (NVDA) look-through concentration | 🟡 Moderate (down from 🟠 High) | ~20.61% of deployed capital (direct $5.069 + VTI-embedded $0.663), down from ~25.1% pre-OMCL — same dilution effect as sector concentration above, not a change in NVDA's own risk |
| Correlation risk (VTI/NVDA) | 🟠 High | Unchanged — NVDA still VTI's #1 holding (~6.70% of fund) |
| OMCL decoupling thesis | 🟡 Moderate, first live crack | Down -1.51% today, same direction as the rest of the book for the first time since entry — watch next 2-3 sessions before treating this as noise vs. signal |
| Execution/operational risk | 🟢 Low | Trade this morning executed cleanly per the pre-committed time-box plan; no new orders attempted this run |
| Geopolitical/macro tail risk (Hormuz) | 🔴 Critical, hardening further | Naval blockade in force since 7/14-15; shipping through the Strait has collapsed to ~7 vessels/day vs. 18-22 normal; Iran calling this an "existential war" with the US; Brent >$84-86, still nowhere near the $75 de-escalation trigger. Oman talks scheduled Saturday 7/18 (tomorrow) are the first concrete diplomatic touchpoint in over a week — genuinely worth watching, but nothing has happened yet |
| Interest rate sensitivity | 🟡 Moderate | Unchanged — ~89% odds of a July 28-29 hold per CME FedWatch (a non-projection meeting); mild tailwind for the growth-tilted core sleeve, doesn't touch the valuation-duration risk already priced into NVDA/VTI |
| Recession/drawdown risk | 🟠 High | Est. 25-50% peak-to-trough drawdown on the deployed sleeve depending on severity (Sec. 6) — modestly *narrower* than yesterday's 26-51% band purely because OMCL's more defensive profile dilutes the blended estimate |
| Liquidity risk (market) | 🟢 Very Low | NVDA/VTI/VXUS remain deep, liquid instruments; OMCL is a $2-3B mid-cap with adequate but thinner daily volume than the other three — still not a liquidity concern at this position size |
| Liquidity risk (account-level) | 🟢 Low | No orders pending |
| Geographic/currency risk | 🟡 Moderate | Unchanged — VXUS ~96%+ non-US-domiciled; blended book still roughly two-thirds US-domiciled by look-through equity exposure |
| Idle cash / opportunity cost | 🔴 Critical (escalated from 🟠 High) | ~44.2% of the ~$49.81 trading pool (~$22.00) still idle even *after* this morning's trade — this is now the **second consecutive weekly cycle above BR's own 25% cash-floor trigger** (BR flagged today as that trigger's first full-week test). Radical-transparency flag: executing OMCL was the right call, but it moved cash from ~54% to ~44%, not anywhere near the 10% target — the underlying "cash sits too long" pattern this trigger exists to catch is still very much live |
| Position sizing discipline | 🟢 Low | Absolute dollar risk remains trivial (~$27.82 of $99.81 total account); no position breaches BR's 20% single-name face-value soft cap (largest is VTI at 19.85%) |

---

## 1. Ground-truth portfolio snapshot (live, this run — ~10:41 ET)

- **Total account value**: $99.8139 (`get_portfolio`: cash $72.00 + equity $27.8139)
- **Positions** (`get_equity_positions` + live `get_equity_quotes`):
  - NVDA: 0.024826 sh, avg cost $201.40, live $204.21 (bid/ask $204.23/$204.26) → **$5.069, +1.39% unrealized**; down **-1.54%** vs. yesterday's $207.40 close
  - VTI: 0.026826 sh, avg cost $372.77, live $368.66 (bid/ask $368.60/$368.63) → **$9.890, -1.10% unrealized**; down **-0.52%** vs. yesterday's $370.58 close
  - VXUS: 0.095185 sh, avg cost $84.05, live $83.31 (bid/ask $83.29/$83.30) → **$7.931, -0.87% unrealized**; down **-0.89%** vs. yesterday's $84.06 close
  - **OMCL (NEW — first report with this holding)**: 0.106405 sh, avg cost $46.99 (this morning's $5.00 fallback execution), live $46.29 (bid/ask $46.28/$46.41) → **$4.926, -1.49% unrealized**; down **-1.51%** vs. yesterday's $47.00 close — its first down day since entry, and the first day it has moved the *same direction* as the rest of the book (see Biggest Risk above)
- **Trading-book accounting** (per ground rules: $50 base + profits, $50 reserve untouchable): trading pool ≈$49.81 (down ~$0.19 on net unrealized losses across all four positions), deployed $27.82 (55.9% of pool), deployable cash ≈$22.00 (44.2% of pool), reserve $50.00 untouchable (embedded in the $72.00 cash balance)
- **All four positions are red today** — the first session where OMCL hasn't provided a clean, opposite-direction data point. Small moves across the board (-0.5% to -1.5%), consistent with a continuation of the broad risk-off tape rather than a fresh idiosyncratic shock to any one name.

## 2. Correlation analysis between holdings
- **NVDA ↔ VTI**: unchanged — NVDA is still VTI's #1 individual holding at ~6.70% of the fund.
- **NVDA ↔ VXUS**: unchanged structural read — indirect chip-sector beta via TSMC (3.98%)/Samsung (2.19%)/SK Hynix (1.86%), the same names now facing their own headwinds (SK Hynix's reported HBM-expansion pullback).
- **VTI ↔ VXUS**: still the most genuinely diversifying pair on currency/regulatory/index-construction grounds.
- **NVDA/VTI/VXUS ↔ OMCL — first crack in the pattern**: three straight up-days of OMCL moving opposite the book's tape (7/14-7/16) just ended. Today all four positions are red together. This is most likely generic market-wide risk aversion (Brent hardening, chip selloff widening) rather than a new OMCL-specific correlation with semiconductors — OMCL has no direct supply-chain link to any of the new bear catalysts (Meta Compute, SK Hynix, Intel). **Recommendation: don't over-read one session, but explicitly re-test this next report** — if OMCL starts consistently red on chip-sector-driven days rather than just broad-market-driven days, the diversification thesis needs revisiting.

## 3. Sector concentration risk
- **Look-through Technology-sector exposure**: NVDA ($5.069, 100%) + VTI's Technology slice ($9.890 × 42.30% ≈ $4.183) + VXUS's Technology slice ($7.931 × 21.04% ≈ $1.669) = **~$10.92, or 39.26% of the $27.82 deployed sleeve** — down materially from 47.8% pre-OMCL. *(Note: VTI/VXUS sector weights carried forward from this desk's last independent fund-fact-sheet pull; recommend a fresh source check next cycle since it's been several reports since these were re-verified directly rather than reused.)*
- **This is the single most consequential number in this report.** It confirms something this desk has said for two weeks but couldn't demonstrate with a live before/after: a genuinely uncorrelated satellite position, even a small one ($5), moves the concentration needle more than another core ETF would. Diluting via denominator (adding a non-tech asset) worked exactly as this desk's Section 8/10/11 recommendations argued it would.
- **As % of total account**: ~10.94%. As % of the ~$49.81 trading pool: ~21.92% — both down from yesterday's equivalents.
- Don't mistake this for "solved." 39.3% concentrated in one sector, in a book with only 4 positions, is still a High risk, not a Low one — it's an improvement in degree, not in kind.

## 4. Geographic exposure and currency risk
- VXUS remains ~96%+ non-US-domiciled — unchanged, still the book's one real geographic diversification win.
- NVDA, VTI, and OMCL are all ~99%+ US-domiciled/US-equity. Blended, the book remains roughly two-thirds US-domiciled by look-through equity exposure — unchanged in substance, since OMCL doesn't move this axis (US-domiciled healthcare-tech).
- Indirect supply-chain geography unchanged: Taiwan/South Korea chip-supply-chain exposure lives in two of four positions (NVDA's TSMC-fab dependency, VXUS's TSMC/Samsung/SK Hynix holdings) — a Taiwan Strait disruption scenario still hits half the book directly.
- Hormuz/Gulf exposure: hardened further overnight and today — naval blockade in force, shipping collapsed to ~7 vessels/day (vs. 18-22 normal), Brent $84-86 and still rising on the week (Al Jazeera reports Brent on track for >10% weekly gain), nowhere near the $75 de-escalation trigger the trader's own (now-closed) OMCL time-box was built around. Oman talks scheduled tomorrow (7/18) are the first scheduled diplomatic event since the escalation began — a real thing to watch, not yet a result.

## 5. Interest rate sensitivity
No material change since 7/16: CME FedWatch ~89% odds of a July 28-29 hold (3.50-3.75% range), a non-projection meeting (no fresh dot plot). Mild, steady tailwind for the growth-tilted core/satellite sleeve; does not offset the valuation-duration risk already embedded in NVDA (MS's DCF: still ~24.9% overvalued) or the broader market's elevated forward multiple. VXUS's structurally lower ex-US valuations remain the one partial rate-sensitivity offset, muted by EM constituents' indirect USD-strength sensitivity. OMCL's own rate sensitivity is not materially different from a typical mid-cap growth name — no dedicated build done this cycle, flagging as a gap to close next report now that it's a live holding.

## 6. Recession stress test
Bands updated to include OMCL, using a more defensive assumption for it (net-cash balance sheet, hospital-capex-dependent but not consumer-discretionary) than for the other three growth/AI-linked names:
- **Base recession scenario** (multiple compression, AI-capex digestion pause, no fresh geopolitical shock): NVDA -35% to -45% (loss $1.77-$2.28); VTI -25% to -35% (loss $2.47-$3.46); VXUS -22% to -32% (loss $1.75-$2.54); OMCL -20% to -30% (loss $0.99-$1.48). **Combined deployed-sleeve loss: ~$6.98-$9.76, a ~25.1%-35.1% drawdown on the $27.82 deployed sleeve** — modestly narrower than 7/16's 26.2%-36.2% band, driven by OMCL's more defensive assumed beta diluting the blend, not by any single name's outlook improving.
- **Severe/tail scenario** (recession + a Taiwan Strait disruption or a Gulf energy/inflation shock forcing the Fed to hold or hike into a slowdown): NVDA -55% to -65% (loss $2.79-$3.30); VTI -45% to -50% (loss $4.45-$4.95); VXUS -35% to -42% (loss $2.78-$3.33); OMCL -35% to -45% (loss $1.72-$2.22). **Combined deployed-sleeve loss: ~$11.74-$13.79, a ~42.2%-49.6% drawdown.**
- **On the total account**: $72.00 (72.1% of the account) is cash — $50 hard untouchable reserve, ~$22 currently idle deployable capital. Even the severe scenario above costs at most ~13.8% of total account value. Same structural point every prior report has made, still true: **the account's downside resilience comes overwhelmingly from being mostly uninvested, not from the risk profile of what is invested.**

## 7. Liquidity risk rating (per holding)
| Holding | Market liquidity | Account-level liquidity | Notes |
|---|---|---|---|
| NVDA | 🟢 Very Low risk | 🟢 Low risk | Deep, liquid market; spread <1bp even amid the selloff |
| VTI | 🟢 Very Low risk | 🟢 Low risk | One of the most liquid US ETFs; spread <1bp |
| VXUS | 🟢 Very Low risk | 🟢 Low risk | $156.5B+ AUM; spread <1bp |
| OMCL | 🟡 Low-Moderate risk | 🟢 Low risk | Mid-cap (~$2-3B), thinner daily volume than the other three holdings; today's bid/ask ($46.28/$46.41, ~13bp spread) is wider than the ETFs but still perfectly workable at this position size ($5) |
| Cash ($72.00) | 🟢 No risk | 🟢 Low risk | Fully liquid |

## 8. Single stock risk and position sizing recommendations
- **Face-value sizing** (of the ~$49.81 trading pool): NVDA 10.18%, VTI 19.85%, VXUS 15.92%, OMCL 9.89%, cash 44.16%. None breach BR's 20% single-name soft cap.
- **Look-through NVDA sizing**: combined NVDA exposure (direct + VTI-embedded) is ~$5.73, or **20.61% of deployed capital** — down from ~25.1% pre-OMCL, the dilution effect again, not a change in NVDA's own risk profile.
- **Combined chip-supply-chain exposure** (NVDA look-through $5.73 + VXUS's TSMC/Samsung/SK Hynix slice $0.637): **~$6.37, or 22.9% of deployed capital** — this is the number that best captures "how exposed is this book to a Taiwan/Korea chokepoint event," and it's a cleaner single metric than tracking NVDA and VXUS's chip exposure separately.
- **Recommendation, updated**: the next dollar should not go to a third core ETF or to adding to any of NVDA/VTI/VXUS — that's unchanged. What's new this cycle: satellite is still underweight relative to BR's own 35% target (currently 20.07% combined NVDA+OMCL face value), so there's real room for a *second* satellite name with zero AI-compute/semiconductor linkage before this book needs to worry about over-concentrating the satellite sleeve itself. GS's OXY (crisis-correlated energy hedge, not AI/chip-linked) remains the cleanest candidate already partway through cross-vetting.
- **No stop-loss is in place on any of the four positions**, consistent with the standing "no mandated stop-loss, use judgment" rule. Flagging again: none of the four positions has a defined exit level. Still trivial in dollar terms at this account size, but now four positions deep instead of three — the case for at least a documented (not necessarily automated) trigger level per position gets marginally stronger with each name added.

## 9. Tail risk scenarios with probability estimates
| Scenario | Rough probability (next 30 days) | Estimated impact on deployed sleeve |
|---|---|---|
| Hormuz conflict escalates further (renewed blockade enforcement already active, tanker strikes, oil >$100) | ~20-25% (nudged up — shipping has now visibly collapsed to ~7 vessels/day and rhetoric has escalated to "existential war" framing) | -30% to -50% on NVDA via multiple compression; VTI down less but not spared; VXUS exposed via energy-import-sensitive economies plus chip-sector overlap; OMCL likely the most insulated of the four but not immune to a broad risk-off flight |
| AI-capex digestion / demand-supply mismatch repricing (**probability nudged up materially this cycle, ~25-35% from ~20-30%**, on Meta Compute + SK Hynix HBM pullback + Intel 18A delay layering onto the Hochul/CoreWeave signals already tracked) | ~25-35% over 3-6 months | -15% to -30% directly on NVDA; -8% to -15% on VXUS via TSMC/Samsung/SK Hynix; -3% to -6% on VTI; OMCL largely uncorrelated to this specific factor |
| Hormuz conflict de-escalates within 1-2 weeks | ~15-20% (nudged down slightly on continued hardening, but tomorrow's Oman talks are a real, scheduled catalyst worth watching) | Modest relief rally across NVDA/VTI/VXUS; limited direct effect on OMCL |
| Taiwan Strait incident (fab disruption) | <5% (low-probability, high-severity) | Hits NVDA + VXUS directly via TSMC/Samsung; VTI and OMCL less directly exposed |
| Broad recession / credit event, no specific tech or geopolitical trigger | ~10-15% over 6-12 months | Base-to-severe stress test applies (Sec. 6): ~25-50% combined deployed-sleeve drawdown |
| OMCL Q2 earnings (7/30) disappoints against a tighter setup than Q1's blowout (JPM's flag) | ~25-30% on the print itself, of which maybe a third is a "beat but still sells off" outcome given this book's ISRG/EXEL pattern-tracking | -8% to -15% on OMCL specifically; immaterial to the rest of the book |
| Status quo grind (no clean resolution, no fresh escalation, no recession, Fed holds 7/28-29) | ~15-20% (down from last report — the new AI-capex-digestion evidence and Hormuz hardening both crowd out probability from this bucket) | Continued sideways-to-mixed drift, now the *least* likely single bucket for the first time this desk has tracked it |

## 10. Hedging strategies (equities-only toolbox — top 3 risks)
No options available on this account. All hedges remain about **what to buy next**, not what to sell.
1. **AI-compute/semiconductor-sector concentration — improved but still the dominant risk (39.3% blended look-through), now compounded by a genuine demand-side threat (Meta Compute) alongside the supply-side/regulatory ones already tracked** → this desk's standing recommendation (buy something with zero AI-compute linkage) got its first real proof point today; the next hedge is more of the same medicine, either growing OMCL via reinvested profits or opening a second genuinely uncorrelated satellite name — not a third core ETF.
2. **Taiwan Strait / chip-supply-chain tail risk, still present in two of four positions (NVDA + VXUS's TSMC/Samsung/SK Hynix exposure), ~22.9% of deployed capital combined** → no clean direct equities-only hedge for a fab-disruption scenario exists; the practical mitigant remains capping further semiconductor-adjacent additions.
3. **Hormuz/Gulf oil-shock tail risk, still fully live and unhedged, hardening further this week (blockade in force, shipping collapsed)** → GS's OXY thesis remains the one candidate in the current pipeline that would function as an actual equities-only hedge against this specific tail risk. Worth prioritizing its cross-vetting cycle (MS DCF + this desk's own read) given both the Hormuz hardening and the satellite-sleeve underweight noted in Sec. 8.

## 11. Rebalancing suggestions with allocation percentages
Endorsing BR's IPS target (55% core / 35% satellite / 10% cash) as the correct compass, unchanged this cycle. Current trading-pool allocation: Core (VTI+VXUS) ~35.77%, Satellite (NVDA+OMCL) ~20.07%, Cash ~44.16%.
- **Core gap**: -19.2pp vs. target, ~$9.57 short — smallest-priority gap per BR's own reasoning (VXUS already hit its own 15% target; a third core ETF isn't the fix for anything flagged in this report).
- **Satellite gap**: -14.9pp vs. target, ~$7.44 short — now the more decision-relevant gap, and per Sec. 8/10 above, the next dollar belongs here specifically in a name with zero AI-compute linkage.
- **Cash excess**: +34.2pp vs. target, ~$17.03 over — flagged as 🔴 Critical in the heat map above. This is the second straight weekly cycle above BR's own 25% cash-floor trigger; today's OMCL trade was real progress (cash fell from ~54% to ~44%) but nowhere near closing this gap. Radical transparency: the trader should not treat "we traded this week" as having resolved the cash-floor concern — it moved the number, not past the threshold.

---

## Cross-analyst notes
- **BR's IPS (7/16 evening)**: this desk's read fully confirms BR's central call — satellite (not core) is the real gap now that VXUS hit its target, and OMCL was correctly identified as the next dollar. This report adds the quantified before/after on concentration (47.8%→39.3%) that validates BR's framework in hard numbers for the first time.
- **GS (7/17 pre-market)**: full agreement that today was the correct fallback-execution day; this desk's new research (Meta Compute, SK Hynix HBM pullback, Intel 18A delay) extends GS's own "chip selloff has produced real carnage" read with three additional, independent catalysts GS's report didn't cover — worth folding into GS's next cycle, since Meta Compute in particular bears on the durability of the entire AI-capex thesis several of GS's top names depend on.
- **MS's DCF (7/17)**: NVDA's ~24.9% overvaluation gap narrowing on price alone, not model change — consistent with this report's read that today's move is broad risk-off, not a fundamentals repricing (yet). OMCL's DCF sign-off (margin of safety widened to ~20.7% on the entry) is a useful cross-check against this desk's Sec. 9 earnings-risk flag — the valuation cushion is real even if the 7/30 print is a tighter setup than Q1.
- **JPM (7/17)**: OMCL's 7/30 earnings window (13 days out) is the one binary risk this desk explicitly priced into Sec. 9 above; JPM's flag that Q2's setup is "objectively tighter than Q1's blowout" is the single most relevant near-term risk to the newest position specifically, distinct from the broader book-level risks covered elsewhere in this report.

---

Sources:
- [Oil prices jump as US and Iran trade attacks over Strait of Hormuz (Al Jazeera)](https://www.aljazeera.com/economy/2026/7/13/oil-prices-jump-as-us-and-iran-trade-attacks-over-strait-of-hormuz)
- [Oil prices hit 1-month high as US-Iran attacks dim Strait of Hormuz outlook (Al Jazeera)](https://www.aljazeera.com/economy/2026/7/14/oil-hits-1-month-high-as-us-iran-fighting-clouds-strait-of-hormuz-outlook)
- [Tech stocks lead steep global selloff as investors lose faith in AI chip trade (Fortune)](https://fortune.com/2026/07/17/tech-stocks-global-selloff-as-investors-ai-semiconductor-chips/)
- [SoftBank sinks over 9% as Asia chip stocks track Wall Street AI sell-off (CNBC)](https://www.cnbc.com/2026/07/17/softbank-chip-stocks-asia-wall-street-ai-rout.html)
- [AI, chip stocks slump as sell-off continues after global peers fall (Seeking Alpha)](https://seekingalpha.com/news/4609566-ai-memory-chip-stocks-dip-after-sk-hynix-samsung-drag-down-kospi)
- [What Triggered the Recent Semiconductor Sell-Off (Kavout)](https://www.kavout.com/market-lens/what-triggered-the-recent-semiconductor-sell-off)
- [Why AI and semiconductor stocks stumbled (Axios)](https://www.axios.com/2026/07/02/ai-meta-stocks-chips)
